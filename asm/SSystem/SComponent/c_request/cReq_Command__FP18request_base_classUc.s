lbl_80266830:
/* 80266830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80266834  7C 08 02 A6 */	mflr r0
/* 80266838  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026683C  48 00 00 15 */	bl cReq_Create__FP18request_base_classUc
/* 80266840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266844  7C 08 03 A6 */	mtlr r0
/* 80266848  38 21 00 10 */	addi r1, r1, 0x10
/* 8026684C  4E 80 00 20 */	blr 
