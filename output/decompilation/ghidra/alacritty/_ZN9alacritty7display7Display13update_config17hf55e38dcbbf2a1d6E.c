void _ZN9alacritty7display7Display13update_config17hf55e38dcbbf2a1d6E(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined local_337 [807];
  
  *(undefined *)(param_1 + 0xc0) = *(undefined *)(param_2 + 0xb);
  *(undefined *)(param_1 + 0x5c0) = *(undefined *)(param_2 + 0x35a);
  uVar1 = *(ushort *)(param_2 + 0x358);
  uVar2 = (uVar1 >> 3) / 0x7d;
  *(ulong *)(param_1 + 0x5a0) = (ulong)uVar2;
  *(uint *)(param_1 + 0x5a8) = ((uint)uVar1 + uVar2 * -1000 & 0xffff) * 1000000;
  _ZN115__LT_alacritty__display__color__List_u20_as_u20_core__convert__From_LT__RF_alacritty__config__color__Colors_GT__GT_4from17h4562d385f38e06c1E
            (local_337,param_2 + 0x1d8);
  (*(code *)PTR_memcpy_009de0b0)(param_1 + 0x838,local_337,0x327);
  return;
}