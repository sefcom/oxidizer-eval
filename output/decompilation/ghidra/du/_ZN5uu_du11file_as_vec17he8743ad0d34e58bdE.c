void _ZN5uu_du11file_as_vec17he8743ad0d34e58bdE(undefined8 param_1)

{
  undefined4 uVar1;
  undefined local_40 [48];
  
  _ZN3std2fs4File4open17h0a597ac115f1ffebE(local_40);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h1d96fd39a300f49cE(local_40);
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h278545cd756cb2f0E
            (local_40,uVar1);
  _ZN4core4iter6traits8iterator8Iterator7collect17he041ac547f577d16E(param_1,local_40);
  return;
}