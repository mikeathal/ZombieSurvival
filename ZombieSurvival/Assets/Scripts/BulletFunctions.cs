using UnityEngine;
using System.Collections;

public class BulletFunctions : MonoBehaviour {

	// Use this for initialization
	void OnTriggerEnter2D( Collider2D activator ) {
		// Does the activating thing have a Killable script on it?
		if (activator.gameObject.tag == "Zombie") {
			// TODO: subtract health from the Killable script

			// destroy this object
			Destroy(activator.gameObject);
			Destroy(gameObject);
		}
	}

	void Update () {
		if ( (gameObject.transform.position.x <= -2f) || (gameObject.transform.position.x >= 2f) || (gameObject.transform.position.y >= 1f)
			|| (gameObject.transform.position.y <= -1f) ) {

			Destroy (gameObject);
	}

}

}
