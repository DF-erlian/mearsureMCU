	AREA Func, CODE, READONLY ;
	EXPORT vaddf32 ;

vaddf32
	
	push {r2}
	vpush {s0, s1, s2}
    ; ??????
    vmov.f32 s0, #1
    vmov.f32 s1, #2

    ; ???????
    mov r2, #0x00         ; ??? r2
    movw r2, #0x9680      ; ??? 16 ?
    movt r2, #0x0098      ; ??? 16 ?

loop
    ; ?????? 16 ? vadd.f32 ??
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
	vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    vadd.f32 s2 s0, s1
    

    ; ???????
    subs r2, r2, #1
    bne loop
	
	vpop {s0, s1, s2}
	pop {r2}
    ; ????
    bx lr