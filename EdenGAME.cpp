#include <iostream>
#include <string>
#include <algorithm> // Required for std::transform
#include <cctype> // Required for ::tolower

using namespace std;

int sanity = 100; // Sanity starts at full

// Function prototypes to ensure all functions are known before they are called
void checkSanity();
void safeButCuriousEnding();
void safeButHauntedEnding();
void safeButSuspiciousEnding();
void exposedEnding();
void secretServer();
void story();


void checkSanity() {
cout << "\n[Sanity: " << sanity << "%]\n";
if (sanity <= 0) {
cout << "\nWill clutched his skull, a guttural gasp escaping his lips. The shrill tone from the computer, which he had thought was gone, returned with a vengeance, amplified, distorting reality.\n";
cout << "His room began to fracture. The walls seemed to breathe, the posters to writhe. Whispers, at first indistinct, solidified into a cacophony of distorted voices, repeating fragmented numbers, then commands, then accusa>
cout << "Dark figures, undefined and terrifying, coalesced in the corners of his room, watching him with unseen eyes from angles that shouldn't exist. He tried to scream, but only a choked sob escaped.\n";
cout << "His own thoughts became alien, echoing the voices, consuming him.\n";
cout << "=== BAD ENDING: LOST SANITY ===\n";
exit(0); // This will end the program immediately
}
}

void secretServer() {
string choice;

cout << "\nACCESS GRANTED: PROJECT EDEN. The green text glowed with an unsettling authority, as if the system itself was acknowledging an unexpected, yet valid, intrusion.\n";
sanity -= 10; // Significant sanity hit for realizing the depth of the project
checkSanity();

// Using a loop to allow multiple file explorations without recursion depth issues
bool exploring = true;
while(exploring) {
cout << "\nAVAILABLE FILES scrolled into view:\n";
cout << " [Experiment7.doc]\n";
cout << " [MindMap.pdf]\n";
cout << " [Reactor.log]\n";
cout << "Do you want to open 'Experiment7', 'MindMap', 'Reactor', or 'Exit' the system? ";
getline(cin, choice);

// Convert choice to lowercase for case-insensitive comparison
transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

if (choice == "experiment7") {
cout << "\nThe file 'Experiment7.doc' flashed open, revealing a redacted document. Case studies scrolled rapidly, each a stark record of human degradation.\n";
cout << " - Subject ID 407: '...acute social anxiety. Progressed to severe auditory hallucinations. Final notation: Subject declared catatonic.'\n";
cout << " - Subject ID 412: '...severe prosopagnosia (face blindness), unable to recognize close family. Final notation: 'Disappeared from facility.'\n";
cout << " - Subject ID 419: '...complete suppression of emotional affect. Current status: Integrated into 'Phase 3 Field Deployment Protocols.' The document hinted at mass application.\n";
sanity -= 30; // Major sanity hit for direct exposure to human suffering
checkSanity();
cout << "Will's hands trembled, a cold sweat beading on his neck. The sheer scale of the cruelty pressed in on him.\n";
} else if (choice == "mindmap") {
cout << "\nThe 'MindMap.pdf' file unfurled a sprawling, intricate diagram, a visual web of power and influence. At its center, glowing with an ominous red aura, was EDEN CORE.\n";
cout << "Thick crimson lines connected it to 'Aegis Defense Solutions,' 'Synaptic Dynamics Corp.,' 'The Cerberus Group,' and a network of 'St. Jude's Neuro-Rehabilitation Centers.'\n";
cout << "Red lines branched to concepts like 'Memory Implantation,' 'Behavioral Coercion,' and 'Mass Control Protocols.'\n";
sanity -= 20; // Moderate sanity hit for realizing the vast conspiracy
checkSanity();
cout << "Will's pulse hammered against his ribs. This wasn't just an experiment; it was a blueprint for global manipulation.\n";
} else if (choice == "reactor") {
cout << "\nClicking 'Reactor.log' opened a scrolling console of technical data. Terms like 'Quantum Entanglement Processor Overload' and 'Neural Net Heat Sink Failure Warning' flashed.\n";
cout << "The 'Power Draw: 1.21 Gigawatts - Fluctuating' suggested a colossal, self-sustaining system, perhaps powering the very energies used in the cognitive experiments. Its scale implied global reach.\n";
sanity -= 15; // Smaller sanity hit, more about the infrastructure than direct horror
checkSanity();
cout << "The sheer power hinted at something far grander and more terrifying than just data storage.\n";
} else if (choice == "exit") {
exploring = false;
cout << "\nWill logged out, his mind reeling. He knew too much now, too many horrifying truths that couldn't be unseen.\n";
} else {
cout << "\nInvalid choice. Please choose 'Experiment7', 'MindMap', 'Reactor', or 'Exit'.\n";
}
}
}

// --- Specific Ending Functions ---

void safeButCuriousEnding() {
cout << "\nWill closed his browser, deleted the email, and tried to forget it. He did, mostly.\n";
cout << "Life carried on, a mundane rhythm of classes and part-time work. But sometimes, late at night, as his computer sat powered off and silent, he could almost swear he heard a faint, high-pitched static hum coming from i>
cout << "=== ENDING: SAFE, BUT FOREVER CURIOUS ===\n";
}

void safeButHauntedEnding() {
cout << "\nWill shut down the computer, the sudden, absolute silence in the room more unnerving than any noise. That night, sleep came fitfully. He woke several times, convinced he'd heard the faint ping of a new email, or se>
cout << "For days afterward, a subtle paranoia clung to him. Every unidentifiable car that slowed on his street, every stranger who looked his way a second too long, sparked a flicker of dread. He was safe, yes, but the unkno>
cout << "=== ENDING: SAFE, BUT HAUNTED BY THE UNKNOWN ===\n";
}

void safeButSuspiciousEnding() {
cout << "\nHe wiped every trace from his hard drive, formatted his USB stick. He buried it all, desperate to reclaim his normal life. Weeks passed, and the initial surge of panic subsided. He almost believed he'd succeeded.\n>
cout << "But then, the subtle things began. A faint, almost imperceptible static would sometimes crackle from his speakers, even when they weren't plugged in. A new, unfamiliar default background sometimes appeared on his com>
cout << "Sometimes, when he was alone in a quiet room, he'd swear he heard faint, fragmented whispers that sounded suspiciously like numbers. He was 'safe,' but the ghost of Project Eden had taken root in his mind, leaving hi>
cout << "=== ENDING: SAFE, BUT FOREVER SUSPICIOUS ===\n";
}

void exposedEnding() {
cout << "\nWill copied everything—the files, the logs, the mind map—onto his USB drive. Then, through a series of encrypted dead drops and anonymous forums, he leaked it all.\n";
sanity -= 10; // Sanity cost for the immense stress and danger of leaking everything
checkSanity();

cout << "Days later, the world exploded. News outlets, initially cautious, were forced to report as the sheer volume and credibility of the data became undeniable. Governments issued swift, indignant denials, labeling it 'dis>
cout << "But the panic spread. Social media was awash with fear, conspiracy theories, and frantic calls for answers. Will became an anonymous hero to millions, and a primary target for the powerful forces he'd exposed.\n";
cout << "He lived under an assumed name, constantly moving. In every crowd, he saw faces that lingered too long; every phone call had a faint echo. He had chosen truth, but in doing so, had forfeited his safety forever.\n";
cout << "=== ENDING: TRUTH EXPOSED, BUT NEVER SAFE ===\n";
}

// --- Main Story Function ---
void story() {
string choice;

// Expanded description of Will's room and the atmosphere
cout << "The only light in Will's room flickered from the ancient desktop computer, its fan a low, consistent whirring that had long blended into the background hum of the old house.\n";
cout << "Dust motes danced lazily in the narrow shaft of moonlight cutting through a gap in the faded, vertical blinds. Discarded energy drink cans formed a small, precarious tower next to a stack of unread textbooks on a des>
cout << "On the wall above, a tattered poster of 'The Glitch Mob' seemed to vibrate faintly in the monitor's glow. From somewhere downstairs, the faint, rhythmic tick-tock of an antique grandfather clock punctuated the late-n>
cout << "Suddenly, a new message pops up on the screen.\n";
cout << "Subject: 'URGENT - Do not ignore this link'\n";
cout << "Do you want to open the message? (yes/no): ";
getline(cin, choice);

// Convert choice to lowercase for case-insensitive comparison
transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

if (choice == "yes") {
cout << "\nThe email opened, barren of any sender name or message—just a single, cryptic link:\n";
cout << "'https://eden-net.deep'\n";
sanity -= 5; // A small sanity hit for the immediate unease
checkSanity();

cout << "Do you want to click the link directly, copy it for later, or ignore it completely? (click/copy/ignore): ";
getline(cin, choice);

// Convert choice to lowercase for case-insensitive comparison
transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

if (choice == "click") {
cout << "\nThe screen went black. A shrill, high-frequency tone filled the room, making Will clutch his head. Then, lines of cryptic green text began to crawl across the display...\n";
secretServer(); // Calls the secret server exploration loop

// After returning from secretServer
cout << "\nShaking, Will disconnected the computer, the sudden silence unnerving after the digital onslaught.\n";
cout << "He stared at his reflection in the blank screen, the chilling implications of 'Project Eden' settling in.\n";
cout << "Does he try to expose what he found, or erase all evidence and try to walk away? (expose/erase): ";
getline(cin, choice);

// Convert choice to lowercase for case-insensitive comparison
transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

if (choice == "expose") {
exposedEnding();
} else { // Erase choice
safeButSuspiciousEnding();
}

} else if (choice == "copy") {
cout << "\nCautious, Will copied the link to an old, unused USB drive, intending to investigate on a safer, untraceable machine.\n";
sanity -= 5; // Unease from the mystery
checkSanity();

cout << "The next few nights were restless. He dreamed of static, of disembodied voices whispering fragmented numbers.\n";
cout << "Eventually, curiosity, or perhaps a growing paranoia, clawed at him. He plugged the USB into a borrowed, isolated machine.\n";
cout << "The link auto-loaded in a black terminal window, the screen flickering...\n";
secretServer(); // Calls the secret server exploration loop

// After returning from secretServer
cout << "\nAfter learning the chilling truth, does he gather his courage to share it with the world or try desperately to forget it all? (share/forget): ";
getline(cin, choice);

// Convert choice to lowercase for case-insensitive comparison
transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

if (choice == "share") {
exposedEnding();
} else { // Forget choice
safeButSuspiciousEnding();
}

} else { // Player chooses to ignore the link directly
cout << "\nHis instincts screamed at him to stop. Will shut down the computer, the sudden, absolute silence in the room more unnerving than any noise.\n";
cout << "He sat in the dark, uneasy. That night, sleep came fitfully. He woke several times, convinced he'd heard the faint ping of a new email, or seen a flash of green text on his closed eyelids.\n";
safeButHauntedEnding();
}

} else { // Player chooses not to open the email
cout << "\nWill deleted the email without opening it, trying to dismiss it as spam. A chill crept up his spine, a fleeting premonition.\n";
cout << "Life went on, a mundane rhythm of classes and part-time work. But late at night, as his computer sat powered off and silent, he could almost swear he heard a faint, high-pitched static hum coming from its dark screen>
safeButCuriousEnding();
}
}

int main() {
cout << "=== U R G E N T E D E N R E A D ===\n\n";
story();
cout << "\n=== T H E E N D ===\n";
return 0;
}


