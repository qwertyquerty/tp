lbl_8045C6A0:
/* 8045C6A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C6A4  7C 08 02 A6 */	mflr r0
/* 8045C6A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C6AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C6B0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8045C6B4  41 82 00 1C */	beq lbl_8045C6D0
/* 8045C6B8  3C A0 80 46 */	lis r5, __vt__8cM3dGPla@ha /* 0x8045CD9C@ha */
/* 8045C6BC  38 05 CD 9C */	addi r0, r5, __vt__8cM3dGPla@l /* 0x8045CD9C@l */
/* 8045C6C0  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045C6C4  7C 80 07 35 */	extsh. r0, r4
/* 8045C6C8  40 81 00 08 */	ble lbl_8045C6D0
/* 8045C6CC  4B E7 26 71 */	bl __dl__FPv
lbl_8045C6D0:
/* 8045C6D0  7F E3 FB 78 */	mr r3, r31
/* 8045C6D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C6D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C6DC  7C 08 03 A6 */	mtlr r0
/* 8045C6E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C6E4  4E 80 00 20 */	blr 
