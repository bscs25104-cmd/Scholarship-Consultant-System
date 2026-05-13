
#include <iostream>

using namespace std;

int main() {

    // PURE LOGIC IDENTITY (NO STRINGS) 
    char name[50], prev_uni[50], research_field[50];



    //  ACADEMIC & SELECTION VARIABLES 
    float hssc_per = 0, alevel_per = 0, bsc_cgpa = 0, msc_cgpa = 0;
    int age = 0, degree_level = 0, country_choice = 0, stream_choice = 0;



    //  DOCUMENT LOGIC TOGGLES (Fixed Initializations) 
    int hasIELTS = 0, hasMOI = 0, hasPassport = 0, hasBankStatement = 0;
    int gapYears = 0, activities = 0, volunteerWork = 0, researchPubs = 0;
    int hasProposal = 0, recLetters = 0, sopReady = 0, medicalFit = 0;
    int hasPoliceCert = 0, wantTestPattern = 0, wantDocList = 0;



    //  INTERACTIVE QUESTIONS 

    int askRecQty = 0, askBankReq = 0, askPoliceReq = 0, askPassReq = 0;

    cout << "====================================================================" << endl;
    cout << "        UNIVERSAL SCHOLARSHIP INTELLIGENCE SYSTEM 2026             " << endl;
    cout << "        Standard: V22.0 ULTRA-DETAILED | Pure Logic Tree           " << endl;
    cout << "====================================================================" << endl;



    //  STEP 1: INITIAL IDENTITY 
    cout << "Welcome! Please enter your Name (First Word Only): ";
    cin >> name;



    //  STEP 2: DESTINATION SELECTION 
    cout << "\nHello " << name << ", which Scholarship Destination are you aiming for?" << endl;
    cout << "1. TURKEY (Turkiye Burslari - Fully Funded)" << endl;
    cout << "2. ITALY (DSU / Regional - Need Based)" << endl;
    cout << "3. SOUTH KOREA (GKS - Global Korea Scholarship)" << endl;
    cout << "4. SAUDI ARABIA (Govt Scholarships - Islamic/Science)" << endl;
    cout << "5. JAPAN (MEXT - Embassy/University Track)" << endl;
    cout << "6. CHINA (CSC / Silk Road - Massive Opportunities)" << endl;
    cout << "7. KAZAKHSTAN (Government Scholarship - New)" << endl;
    cout << "8. BRUNEI (Darussalam Government Scholarship)" << endl;
    cout << "Select Country (1-8): ";
    cin >> country_choice;

    if (country_choice < 1 || country_choice > 8) {
        cout << "[!] Target out of scope. Exiting." << endl;
        return 0;
    }




    //  STEP 3: ACADEMIC LEVEL BRANCHING 
    cout << "\nWhich Degree Level are you applying for?" << endl;
    cout << "1. BACHELOR / UNDERGRADUATE (After 12 Years / High School)" << endl;
    cout << "2. MASTER / POSTGRADUATE (After 16 Years / Bachelor)" << endl;
    cout << "3. PhD / DOCTORATE (After 18 Years / Master-MPhil)" << endl;
    cout << "Select Level (1-3): ";
    cin >> degree_level;




    //  STEP 4: DETAILED DATA GATHERING 
    if (degree_level == 1) {
        cout << "\n--- UNDERGRADUATE (BACHELOR) ENTRY ---" << endl;
        cout << "Select System (1: Board/HSSC | 2: A-Levels/High School): ";
        cin >> stream_choice;
        if (stream_choice == 1) {
            cout << "Enter HSSC / Intermediate Percentage: "; cin >> hssc_per;
        }
        else {
            cout << "Enter A-Level Equivalence or High School %: "; cin >> alevel_per;
            hssc_per = alevel_per;
        }
    }
    else if (degree_level == 2) {
        cout << "\n--- POSTGRADUATE (MASTER) ENTRY ---" << endl;
        cout << "Enter Bachelor Final CGPA (out of 4.0): "; cin >> bsc_cgpa;
        cout << "Enter Previous University Name (NoSpaces): "; cin >> prev_uni;
        if (bsc_cgpa > 4.0) { cout << "[!] GPA Error. System uses 4.0 scale."; return 0; }
    }
    else if (degree_level == 3) {
        cout << "\n--- DOCTORATE (PhD) ENTRY ---" << endl;
        cout << "Enter Master/MPhil CGPA (out of 4.0): "; cin >> msc_cgpa;
        cout << "Number of Research Publications: "; cin >> researchPubs;
        cout << "Have you prepared a Research Proposal? (1:Yes, 0:No): "; cin >> hasProposal;
    }




    //  STEP 5: ELIGIBILITY & DOCUMENTATION 
    cout << "\n[GLOBAL REQUIREMENT CHECKLIST]" << endl;
    cout << "Enter Your Age: "; cin >> age;
    cout << "Do you have a Valid Passport? (1:Yes, 0:No): "; cin >> hasPassport;
    cout << "IELTS / TOEFL Result Available? (1:Yes, 0:No): "; cin >> hasIELTS;
    if (hasIELTS == 0) {
        cout << "Do you have English Proficiency (MOI)? (1:Yes, 0:No): "; cin >> hasMOI;
    }
    cout << "Enter Gap Years after last degree: "; cin >> gapYears;
    cout << "Is your Statement of Purpose (SOP) Ready? (1:Yes, 0:No): "; cin >> sopReady;
    cout << "Co-curricular / Extra Activities Certificates? (1:Yes, 0:No): "; cin >> activities;
    cout << "Volunteer Experience Certificates? (1:Yes, 0:No): "; cin >> volunteerWork;
    cout << "Medical Fitness Certificate Ready? (1:Yes, 0:No): "; cin >> medicalFit;
    cout << "Police Character Certificate Ready? (1:Yes, 0:No): "; cin >> hasPoliceCert;
    cout << "Bank Statement for Visa (Self/Parent)? (1:Yes, 0:No): "; cin >> hasBankStatement;






    //  STEP 6: DYNAMIC COUNTRY ADVISORY 
    cout << "\n----------------------------------------------------------" << endl;
    cout << ">>> WOULD YOU LIKE SPECIFIC ADVICE FOR THIS SCHOLARSHIP?" << endl;





    // Passport Requirement
    cout << "1. Check if Passport is Compulsory for Application? (1:Yes, 0:No): "; cin >> askPassReq;
    if (askPassReq == 1) {
        if (country_choice == 1) cout << "[ADVICE] Turkey: Passport NOT needed for application. CNIC/B-Form is okay." << endl;
        else cout << "[ADVICE] System: Passport is MANDATORY for this scholarship." << endl;
    }



    // Recommendation Letters
    cout << "2. Check Recommendation Letter Requirements? (1:Yes, 0:No): "; cin >> askRecQty;
    if (askRecQty == 1) {
        if (country_choice == 4 || country_choice == 5) cout << "[ADVICE] You need 3 Academic Letters from Professors." << endl;
        else cout << "[ADVICE] You need 2 Academic Letters from your previous teachers." << endl;
    }



    // Bank Statement Necessity
    cout << "3. Is Bank Statement needed for this scholarship? (1:Yes, 0:No): "; cin >> askBankReq;
    if (askBankReq == 1) {
        if (country_choice == 1 || country_choice == 6) cout << "[ADVICE] Not required at application stage. Needed for Visa only." << endl;
        else if (country_choice == 2) cout << "[ADVICE] CRITICAL: Italy requires strong financial proof for DSU." << endl;
        else cout << "[ADVICE] Standard: Required for Visa, not for initial selection." << endl;
    }




    // Police & Medical
    cout << "4. Check Police & Medical Requirements? (1:Yes, 0:No): "; cin >> askPoliceReq;
    if (askPoliceReq == 1) {
        if (country_choice == 4) cout << "[ADVICE] Saudi: Police Character Certificate is COMPULSORY." << endl;
        else if (country_choice == 7 || country_choice == 8) cout << "[ADVICE] Medical Certificate is MANDATORY for Kazakh/Brunei." << endl;
        else cout << "[ADVICE] Recommended: Keep Medical & Police certs ready for Visa." << endl;
    }




    // Test Pattern (Specific Branching)
    cout << "\n5. Want to know the TEST PATTERN for your choice? (1:Yes, 0:No): "; cin >> wantTestPattern;
    if (wantTestPattern == 1) {
        cout << "\n[TEST PATTERN ADVISORY - 2026]" << endl;
        if (country_choice == 1) { // Turkey
            if (degree_level == 1) cout << "TURKEY BACHELOR: IQ, Math & Geometry (YOS Pattern)." << endl;
            else cout << "TURKEY GRADUATE: Online Academic Interview only." << endl;
        }
        else if (country_choice == 2) { // Italy
            cout << "ITALY: TOLC Exam (Subject specific like TOLC-E, TOLC-I)." << endl;
        }
        else if (country_choice == 5) { // Japan
            cout << "JAPAN MEXT: Written test at Embassy (Math, English, Science)." << endl;
        }
        else if (country_choice == 6) { // China
            cout << "CHINA CSC: No centralized test; University specific Interview." << endl;
        }
        else {
            cout << "STANDARD: Profile evaluation followed by an Interview." << endl;
        }
    }





    // --- STEP 7: DOCUMENT CHECKLIST ---
    cout << "\n6. View the FULL DOCUMENT CHECKLIST? (1:Yes, 0:No): "; cin >> wantDocList;
    if (wantDocList == 1) {
        cout << "\n[REQUIRED DOCUMENTS LIST]" << endl;
        cout << "- Attested Degrees & Transcripts (IBCC/HEC/MOFA)." << endl;
        cout << "- Study Plan / SOP (Statement of Purpose)." << endl;
        if (country_choice != 1) cout << "- Passport (Scan of First 2 pages)." << endl;
        cout << "- 2 Academic Recommendation Letters." << endl;
        cout << "- Medical Fitness Certificate." << endl;
        if (degree_level > 1) cout << "- Research Proposal / Thesis Abstract." << endl;
        if (country_choice == 2) cout << "- Family Income Certificate (For Scholarship)." << endl;
    }




    //  STEP 8: FINAL EVALUATION 
    cout << "\n==========================================================" << endl;
    cout << "             OFFICIAL CONSULTANCY REPORT CARD             " << endl;
    cout << "==========================================================" << endl;
    cout << " CANDIDATE: " << name << endl;




    // Academic Merit
    cout << " MERIT STATUS: ";
    if (degree_level == 1) {
        if (hssc_per >= 85) cout << "Premium Tier (Strong Selection Chance)" << endl;
        else cout << "Competitive Tier" << endl;
    }
    else {
        if (bsc_cgpa >= 3.5) cout << "Outstanding Profile" << endl;
        else cout << "Standard Profile" << endl;
    }




    // Scholarship Probability
    cout << " SELECTION CHANCE: ";
    if (country_choice == 1 && age <= 21 && hssc_per >= 70) cout << "High for Turkey." << endl;
    else if (country_choice == 2 && hssc_per >= 60) cout << "Excellent for Italy Grant." << endl;
    else cout << "Moderate (Improve Profile)." << endl;




    // READINESS SCORE (Fixed Logic)
    int score = 0;
    if (hasPassport == 1) score += 25;
    if (hasIELTS == 1 || hasMOI == 1) score += 25;
    if (sopReady == 1) score += 25;
    if (recLetters >= 1) score += 25;

    cout << " DOCUMENT READINESS: " << score << "%" << endl;




    // FINAL ADVISORY
    cout << "\n--- FINAL ADVISORY ---" << endl;
    if (hasPassport == 0 && country_choice != 1) cout << " -> ACTION: Apply for Passport IMMEDIATELY." << endl;
    if (hasIELTS == 0 && hasMOI == 0) cout << " -> ACTION: English Proficiency Letter is required." << endl;
    if (score >= 75) cout << " -> STATUS: Your profile is READY for 2026 Intake." << endl;
    else cout << " -> STATUS: Complete the missing documents listed above." << endl;

    cout << "\n Designed & Programmed by: " << name << " | ITU (BSCS)" << endl;
    cout << " Full-Stack Logic Tree System V22.0" << endl;
    cout << "==========================================================" << endl;

    return 0;
}
