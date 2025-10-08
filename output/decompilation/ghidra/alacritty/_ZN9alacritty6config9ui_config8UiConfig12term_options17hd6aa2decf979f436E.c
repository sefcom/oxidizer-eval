void _ZN9alacritty6config9ui_config8UiConfig12term_options17hd6aa2decf979f436E
               (undefined8 *param_1,long param_2)

{
  undefined uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined unaff_R15B;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
  )(&local_40,param_2 + 0x48);
  uVar2 = *(uint *)(param_2 + 0x410);
  if (*(byte *)(param_2 + 0x3d4) == 4) {
    bVar3 = 2;
  }
  else {
    bVar3 = _ZN9alacritty6config6cursor124__LT_impl_u20_core__convert__From_LT_alacritty__config__cursor__ConfigCursorStyle_GT__u20_for_u20_vte__ansi__CursorStyle_GT_4from17hf8b7e6b388c32a93E
                      ((uint)(ushort)*(byte *)(param_2 + 0x3d4) |
                       (uint)*(byte *)(param_2 + 0x3d5) << 8);
    bVar3 = bVar3 & 1;
    unaff_R15B = extraout_DL;
  }
  bVar4 = _ZN9alacritty6config6cursor124__LT_impl_u20_core__convert__From_LT_alacritty__config__cursor__ConfigCursorStyle_GT__u20_for_u20_vte__ansi__CursorStyle_GT_4from17hf8b7e6b388c32a93E
                    (*(undefined2 *)(param_2 + 0x3d6));
  uVar1 = *(undefined *)(param_2 + 0x390);
  param_1[3] = (ulong)uVar2;
  *(byte *)(param_1 + 4) = bVar4 & 1;
  *(undefined *)((long)param_1 + 0x21) = extraout_DL_00;
  *(byte *)((long)param_1 + 0x22) = bVar3;
  *(undefined *)((long)param_1 + 0x23) = unaff_R15B;
  param_1[2] = local_30;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  *(undefined *)((long)param_1 + 0x24) = 1;
  *(undefined *)((long)param_1 + 0x25) = uVar1;
  return;
}