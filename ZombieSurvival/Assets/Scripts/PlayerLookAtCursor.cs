using UnityEngine;
using System.Collections;

public class PlayerLookAtCursor : MonoBehaviour {

	public Transform Player;
	
	// Update is called once per frame
	void Update () {
		Vector3 LookDirection = (Camera.main.ScreenToWorldPoint( Input.mousePosition)) - Player.position;
		LookDirection.z = 0f;

		Player.transform.up = LookDirection;
	}
}
