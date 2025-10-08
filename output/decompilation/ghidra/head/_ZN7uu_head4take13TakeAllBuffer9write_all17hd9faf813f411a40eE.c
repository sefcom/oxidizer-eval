undefined  [16]
_ZN7uu_head4take13TakeAllBuffer9write_all17hd9faf813f411a40eE(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  
  lVar1 = _ZN7uu_head4take13TakeAllBuffer15remaining_bytes17hb388a4c93e1b9bcbE();
  lVar2 = _ZN7uu_head4take13TakeAllBuffer17write_bytes_exact17he1c2e4ce273b5219E
                    (param_1,param_2,lVar1);
  auVar3._1_7_ = 0;
  auVar3[0] = lVar2 != 0;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  auVar3._8_8_ = lVar1;
  return auVar3;
}