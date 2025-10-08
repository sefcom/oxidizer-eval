void _ZN7uu_head4take18TakeAllLinesBuffer11write_lines17hf88d8b4ac800ff57E
               (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,undefined param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined **local_58;
  undefined **local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    local_58 = &PTR_s_Must_request_at_least_1_line__001f7bc0;
    local_50 = (undefined **)0x1;
    local_48 = 8;
    local_40 = 0;
    uStack_38 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_001fe530)
              (&local_58,&PTR_s_src_uu_head_src_take_rs_001f7be0);
    goto LAB_0016611f;
  }
  if (*(ulong *)(param_2 + 0x20) < param_4) {
    auVar5 = _ZN7uu_head4take13TakeAllBuffer9write_all17hd9faf813f411a40eE(param_2,param_3);
    lVar4 = auVar5._8_8_;
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      param_4 = *(ulong *)(param_2 + 0x20);
      lVar2 = 0;
LAB_001660cc:
      *(long *)(param_2 + 0x20) = lVar2;
      param_1[1] = lVar4;
      param_1[2] = param_4;
      uVar3 = 0;
      goto LAB_001660da;
    }
    param_1[1] = lVar4;
  }
  else {
    auVar5 = _ZN7uu_head4take13TakeAllBuffer16remaining_buffer17he80dcc941e66ef3aE(param_2);
    local_58 = auVar5._0_8_;
    local_48 = auVar5._8_8_ + (long)local_58;
    local_40 = CONCAT71(local_40._1_7_,param_5);
    local_50 = local_58;
    lVar2 = _ZN4core4iter6traits8iterator8Iterator10advance_by17hf31ce2368e9ab065E
                      (&local_58,param_4 - 1);
    if (lVar2 != 0) {
LAB_0016611f:
      local_58 = &PTR_s_Somehow_we_re_being_asked_to_wri_001f7bd0;
      local_50 = (undefined **)0x1;
      local_48 = 8;
      local_40 = 0;
      uStack_38 = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_001fe530)
                (&local_58,&PTR_s_src_uu_head_src_take_rs_001f7bf8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    auVar5 = _ZN6memchr4arch7generic6memchr4Iter4next17hfac8768f323c3893E(&local_58,&local_40);
    if (auVar5._0_8_ != 1) goto LAB_0016611f;
    lVar4 = auVar5._8_8_ + 1;
    lVar2 = _ZN7uu_head4take13TakeAllBuffer17write_bytes_exact17he1c2e4ce273b5219E(param_2,param_3);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_2 + 0x20) - param_4;
      goto LAB_001660cc;
    }
    param_1[1] = lVar2;
  }
  uVar3 = 1;
LAB_001660da:
  *param_1 = uVar3;
  return;
}