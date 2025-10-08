void _ZN4just5lexer5Lexer11lex_choices17h87db0effb4b54026E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               byte param_5)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined local_50;
  undefined7 uStack_4f;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_90);
  if ((char)uStack_48 != '%') {
    param_1[8] = CONCAT71(uStack_4f,local_50);
    param_1[9] = CONCAT44(uStack_44,uStack_48);
    param_1[6] = CONCAT44(uStack_5c,local_60);
    param_1[7] = CONCAT44(uStack_54,uStack_58);
    param_1[4] = CONCAT44(uStack_6c,uStack_70);
    param_1[5] = CONCAT44(uStack_64,uStack_68);
    param_1[2] = CONCAT44(uStack_7c,uStack_80);
    param_1[3] = CONCAT44(uStack_74,uStack_78);
    *param_1 = CONCAT44(uStack_8c,local_90);
    param_1[1] = CONCAT44(uStack_84,uStack_88);
    return;
  }
  _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_90,param_2,*param_4);
  if ((char)uStack_48 == '%') {
    if ((char)local_90 == '\0') {
      _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_90,param_2,param_4[2]);
      if ((char)uStack_48 != '%') goto LAB_00372216;
      if ((char)local_90 != '\0') {
        param_4 = param_4 + 2;
        goto LAB_003721ac;
      }
      if (param_5 == 0x25) {
        _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x23);
        _ZN4core4iter6traits8iterator8Iterator7collect17he7d9c722beb08c19E
                  (&local_a8,param_4,param_4 + 4);
                    /* try { // try from 00372290 to 003722d4 has its CatchHandler @ 00372352 */
        cVar1 = _ZN4just5lexer5Lexer6at_eof17h5321ae9ca03a4d44E(param_2);
        if (cVar1 == '\0') {
          _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_90,param_2);
          if ((char)uStack_48 != '%') {
            param_1[8] = CONCAT71(uStack_4f,local_50);
            param_1[9] = CONCAT44(uStack_44,uStack_48);
            *(undefined4 *)(param_1 + 6) = local_60;
            *(undefined4 *)((long)param_1 + 0x34) = uStack_5c;
            *(undefined4 *)(param_1 + 7) = uStack_58;
            *(undefined4 *)((long)param_1 + 0x3c) = uStack_54;
            *(undefined4 *)(param_1 + 4) = uStack_70;
            *(undefined4 *)((long)param_1 + 0x24) = uStack_6c;
            *(undefined4 *)(param_1 + 5) = uStack_68;
            *(undefined4 *)((long)param_1 + 0x2c) = uStack_64;
            *(undefined4 *)(param_1 + 2) = uStack_80;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_7c;
            *(undefined4 *)(param_1 + 3) = uStack_78;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_74;
            *(undefined4 *)param_1 = local_90;
            *(undefined4 *)((long)param_1 + 4) = uStack_8c;
            *(undefined4 *)(param_1 + 1) = uStack_88;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_84;
            _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h4b26006e42ee6c54E
                      (CONCAT44(uStack_a4,local_a8),CONCAT44(uStack_9c,uStack_a0));
            return;
          }
          uStack_78 = (undefined4)local_98;
          uStack_74 = (undefined4)((ulong)local_98 >> 0x20);
          uStack_88 = local_a8;
          uStack_84 = uStack_a4;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          uVar2 = 0x8000000000000035;
        }
        else {
          uStack_78 = (undefined4)local_98;
          uStack_74 = (undefined4)((ulong)local_98 >> 0x20);
          uStack_88 = local_a8;
          uStack_84 = uStack_a4;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          uVar2 = 0x8000000000000037;
        }
        local_90 = (undefined4)uVar2;
        uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
        _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_90);
        return;
      }
      uVar3 = (uint)param_5;
    }
    else {
LAB_003721ac:
      uVar3 = param_4[1];
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,uVar3);
    *(undefined *)(param_1 + 9) = 0x25;
  }
  else {
LAB_00372216:
    param_1[8] = CONCAT71(uStack_4f,local_50);
    *(ulong *)((long)param_1 + 0x31) =
         CONCAT17((undefined)uStack_58,CONCAT43(uStack_5c,local_60._1_3_));
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(local_50,CONCAT43(uStack_54,uStack_58._1_3_));
    *(ulong *)((long)param_1 + 0x21) =
         CONCAT17((undefined)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *(ulong *)((long)param_1 + 0x29) =
         CONCAT17((undefined)local_60,CONCAT43(uStack_64,uStack_68._1_3_));
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)uStack_78,CONCAT43(uStack_7c,uStack_80._1_3_));
    *(ulong *)((long)param_1 + 0x19) =
         CONCAT17((undefined)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulong *)((long)param_1 + 1) =
         CONCAT17((undefined)uStack_88,CONCAT43(uStack_8c,local_90._1_3_));
    *(ulong *)((long)param_1 + 9) =
         CONCAT17((undefined)uStack_80,CONCAT43(uStack_84,uStack_88._1_3_));
    *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_44,uStack_48._1_3_);
    *(undefined4 *)((long)param_1 + 0x4c) = uStack_44;
    *(char *)param_1 = (char)local_90;
    *(char *)(param_1 + 9) = (char)uStack_48;
  }
  return;
}