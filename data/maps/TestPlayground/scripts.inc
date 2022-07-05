TestPlayground_MapScripts::
	.byte 0


TestPlayground_EventScript_Semantics::
	lock
	faceplayer
	msgbox TestPlayground_Text_Semantics_YesNo, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, TestPlayground_EventScript_Semantics_Explanation
	release
	end

TestPlayground_EventScript_Semantics_Explanation::
	msgbox TestPlayground_Text_Semantics_Explanation, MSGBOX_AUTOCLOSE
	return

TestPlayground_Text_Semantics_YesNo:
	.string "Parece que eres un{A} chic{OA}.\p"
	.string "Quieres saber de semánticas?$"

TestPlayground_Text_Semantics_Explanation:
	.string "Una semántica disponible es\n"
	.string "OA, que pone o (chico) o a (chica)…\p"
	.string "También tenemos la semántica A, que\n"
	.string "pone A si es chica (ej. entrenadorA)\p"
	.string "También tenemos ELLA, que pone\n"
	.string "el o la.\p"
	.string "Está COLORPLAYER y COLORRIVAL,\n"
	.string "y más que tendrás que investigar.$"
