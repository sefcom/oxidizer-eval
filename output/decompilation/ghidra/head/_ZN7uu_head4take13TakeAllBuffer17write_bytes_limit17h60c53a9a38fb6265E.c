undefined  [16]
_ZN7uu_head4take13TakeAllBuffer17write_bytes_limit17h60c53a9a38fb6265E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  
  uVar1 = _ZN7uu_head4take13TakeAllBuffer15remaining_bytes17hb388a4c93e1b9bcbE();
  lVar2 = _ZN4core3cmp3Ord3min17h08a96a0a44b5e327E(uVar1,param_3);
  lVar3 = _ZN7uu_head4take13TakeAllBuffer17write_bytes_exact17he1c2e4ce273b5219E
                    (param_1,param_2,lVar2);
  auVar4._1_7_ = 0;
  auVar4[0] = lVar3 != 0;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  auVar4._8_8_ = lVar2;
  return auVar4;
}