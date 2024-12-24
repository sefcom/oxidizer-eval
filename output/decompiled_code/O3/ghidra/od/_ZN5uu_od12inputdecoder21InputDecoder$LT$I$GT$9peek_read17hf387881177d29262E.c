long * __rustcall uu_od::inputdecoder::InputDecoder<I>::peek_read(long *param_1,long param_2)

{
  undefined uVar1;
  long local_28;
  long local_20;
  long local_18;
  
  _<uu_od::peekreader::PeekReader<R>as_uu_od::peekreader::PeekRead>::peek_read
            (&local_28,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  if (local_28 == 0) {
    *(long *)(param_2 + 0x28) = local_20;
    *(long *)(param_2 + 0x30) = local_18;
    uVar1 = *(undefined *)(param_2 + 0x38);
    param_1[1] = local_20;
    param_1[2] = local_18;
    local_20 = param_2;
  }
  else {
    uVar1 = 3;
  }
  *param_1 = local_20;
  *(undefined *)(param_1 + 3) = uVar1;
  return param_1;
}