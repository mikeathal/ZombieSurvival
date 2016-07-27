using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

	float LastTimeFired = 0f;

	public float PlayerSpeed = 5f;
	Vector2 PlayerMoveVector = new Vector2(0f, 0f);
	Rigidbody2D PlayerRigidBody;

	public Rigidbody2D Bullet;
	public float BulletSpeed = 5f;

	void Start () {
		PlayerRigidBody = GetComponent<Rigidbody2D>();
	}


	void FireBullets() {
		Rigidbody2D BulletClone = (Rigidbody2D)Instantiate (Bullet, transform.position, transform.rotation);
		BulletClone.velocity = transform.up * BulletSpeed;

	}

	// Update is called once per frame
	void Update () {
		float horizontal = Input.GetAxis("Horizontal");
		float vertical = Input.GetAxis("Vertical");

		// Player move controls
		PlayerMoveVector = new Vector2( horizontal, vertical );
		if ( PlayerMoveVector.magnitude > 1f ) {
			PlayerMoveVector = PlayerMoveVector.normalized; // better way of normalization
		}


		// Restart Button
		if ( Input.GetKeyDown(KeyCode.R) ) {
			int currentSceneNumber = SceneManager.GetActiveScene ().buildIndex;
			SceneManager.LoadScene (currentSceneNumber);
			}


		// Click to fire bullets
		if (Input.GetMouseButton (0) && Time.time - LastTimeFired > 0.25f ) {
			FireBullets ();
			LastTimeFired = Time.time;
		}

	}

	// FixedUpdate is when Physics runs
	void FixedUpdate () {
		PlayerRigidBody.velocity = PlayerMoveVector * PlayerSpeed;
	}
		


}