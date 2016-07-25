using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float PlayerSpeed = 5f;
	Vector2 PlayerMoveVector = new Vector2(0f, 0f);
	Rigidbody2D PlayerRigidBody;

	void Start () {
		PlayerRigidBody = GetComponent<Rigidbody2D>();
	}

	// Update is called once per frame
	void Update () {
		float horizontal = Input.GetAxis("Horizontal");
		float vertical = Input.GetAxis("Vertical");
		PlayerMoveVector = new Vector2( horizontal, vertical );
		if ( PlayerMoveVector.magnitude > 1f ) {
			PlayerMoveVector = PlayerMoveVector.normalized; // better way of normalization
		}
	}

	// FixedUpdate is when Physics runs
	void FixedUpdate () {
		PlayerRigidBody.velocity = PlayerMoveVector * PlayerSpeed;
	}
}