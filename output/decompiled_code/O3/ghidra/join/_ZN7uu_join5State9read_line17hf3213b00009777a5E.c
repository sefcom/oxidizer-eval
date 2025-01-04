void __rustcall uu_join::State::read_line(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _<std::io::Split<B>as_core::iter::traits::iterator::Iterator>::next(&local_80,param_2 + 0x28);
  if (local_80 == -0x7fffffffffffffff) {
    *param_1 = 0x8000000000000000;
  }
  else {
    *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
    if (local_80 == -0x8000000000000000) {
      param_1[1] = local_78;
      *param_1 = 0x8000000000000001;
    }
    else {
      local_68 = local_80;
      local_60 = local_78;
      local_58 = local_70;
      Line::new(&local_50,&local_68,param_3,*(undefined8 *)(param_2 + 0x48));
      if (*(ulong *)(param_2 + 0x48) < local_40) {
        *(ulong *)(param_2 + 0x48) = local_40;
      }
      param_1[4] = local_30;
      param_1[5] = uStack_28;
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      *param_1 = local_50;
      param_1[1] = uStack_48;
    }
  }
  return;
}