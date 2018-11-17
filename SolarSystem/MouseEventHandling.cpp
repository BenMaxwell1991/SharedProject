#include "MouseEventHandling.h"

// sender is the object that triggered the event (In this case PB_Display)
// e contains all mouse event arguments (Such as cursor position)
void HandleMouseMove(System::Windows::Forms::ToolStripStatusLabel^  aStatusLabel, System::Windows::Forms::MouseEventArgs^  e) {

	// Displays the cursor X and Y positions at the bottom right of the Picture Box.
	aStatusLabel->Text = "Cursor Position: " + e->X + "," + e->Y;
}
