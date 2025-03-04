undefined8 *
_ZN7uu_comm9open_file17he2f4406dcd44f5f5E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h22cb55d7b7126493E
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17hd6a547187e4f2484E(&local_30,param_2,param_3);
    if (local_30 == 0) {
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc0a86971cd481fb3E
                (param_1,0x2000,local_2c);
    }
    else {
      *param_1 = local_28;
      param_4 = 0xb;
    }
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    *param_1 = 0;
    param_1[1] = uVar2;
  }
  *(undefined *)(param_1 + 6) = param_4;
  return param_1;
}