undefined8
_ZN9meilitool7upgrade5v1_101_98__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_meilitool__upgrade__v1_10__OffsetDateTime_GT_9serialize17ha82ee86854d2ae4eE
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  _ZN4time10formatting11formattable6sealed6Sealed6format17h3cd88f8840fdb437E
            (&uStack_48,*(undefined4 *)(param_1 + 1),*param_1,
             (uint)*(ushort *)((long)param_1 + 0xd) * 0x10000 +
             (uint)*(byte *)((long)param_1 + 0xc) * 0x100 + 1);
  if ((int)uStack_48 != 1) {
    uStack_48 = uStack_40;
    uStack_40 = uStack_38;
    uStack_38 = uStack_30;
    _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17h33ff1cd292e54e8bE
              (param_2);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E(&uStack_48);
    return 0;
  }
  uStack_18 = uStack_30;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  uStack_20 = (undefined4)uStack_38;
  uStack_1c = uStack_38._4_4_;
  uVar1 = _ZN67__LT_serde_json__error__Error_u20_as_u20_serde_core__ser__Error_GT_6custom17hf6d0e4fdcd91505eE
                    (&uStack_28);
  return uVar1;
}