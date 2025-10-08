void _ZN7uu_head4take18TakeAllLinesBuffer11fill_buffer17hfa940c1c6239deabE
               (undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  char local_28 [8];
  
  auVar2 = _ZN7uu_head4take13TakeAllBuffer11fill_buffer17hf61126089cbcf29eE(param_2,param_3);
  if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    auVar3 = _ZN7uu_head4take13TakeAllBuffer16remaining_buffer17he80dcc941e66ef3aE(param_2);
    local_28[0] = param_4;
    uVar1 = _ZN6memchr4arch7generic6memchr4Iter5count17hdf305186817169f5E
                      (auVar3._0_8_,auVar3._8_8_ + auVar3._0_8_,local_28);
    *(undefined8 *)(param_2 + 0x20) = uVar1;
    auVar3 = _ZN7uu_head4take13TakeAllBuffer16remaining_buffer17he80dcc941e66ef3aE(param_2);
    if ((auVar3._8_8_ != 0) && (*(char *)(auVar3._0_8_ + -1 + auVar3._8_8_) != param_4)) {
      *(undefined *)(param_2 + 0x28) = 1;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    param_1[1] = auVar2._8_8_;
    param_1[2] = uVar1;
    uVar1 = 0;
  }
  else {
    param_1[1] = auVar2._8_8_;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}