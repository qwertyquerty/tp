lbl_8095BC38:
/* 8095BC38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8095BC3C  7C 08 02 A6 */	mflr r0
/* 8095BC40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8095BC44  4B FF CB 5D */	bl Create__10daNpcAsh_cFv
/* 8095BC48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8095BC4C  7C 08 03 A6 */	mtlr r0
/* 8095BC50  38 21 00 10 */	addi r1, r1, 0x10
/* 8095BC54  4E 80 00 20 */	blr 
