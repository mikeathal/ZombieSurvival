using UnityEngine;
using System.Collections;

public class DeathTrigger : MonoBehaviour {

	// OnTriggerEnter2D a function that is automatically called when
	// something with a Rigidbody2D enters this trigger
	void OnTriggerEnter2D( Collider2D activator ) {
		// Does the activating thing have a Killable script on it?
		if (activator.gameObject.tag == "Player") {
			// TODO: subtract health from the Killable script

			// destroy this object
			activator.GetComponent<SpriteRenderer>().enabled = false;
		}
	}
}