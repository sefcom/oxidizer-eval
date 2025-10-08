undefined8 _ZN5uu_dd4Dest8truncate17h9dbaec5663a323ccE(char *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (*param_1 != '\x01') {
    return 0;
  }
  auVar2 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_00246d18
           )();
  if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    return auVar2._8_8_;
  }
  uVar1 = (*(code *)PTR__ZN3std2fs4File7set_len17h8625c3bc8a96431dE_00246d20)
                    (param_1 + 4,auVar2._8_8_);
  return uVar1;
}