void _ZN15linera_exporter6common1_91__LT_impl_u20_core__fmt__Debug_u20_for_u20_linera_exporter__common__BadNotificationKind_GT_3fmt17h81cf0ce4c0509ab5E
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined auStack_28 [16];
  
  lVar1 = *param_1;
  if (lVar1 == -0x7fffffffffffffef) {
    (*(code *)PTR__ZN4core3fmt9Formatter12debug_struct17hec641bbd2175c09aE_015926e8)
              (auStack_28,param_2,&DAT_0033dd08,0xd);
    if (param_1[1] == 0) goto LAB_00a11b6b;
    param_1 = param_1 + 1;
    ppuVar2 = &
              PTR__ZN4core3ptr99drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_bincode__error__ErrorKind_GT__GT__GT_17hcf5d3b13f151f71bE_014f2318
    ;
  }
  else {
    (*(code *)PTR__ZN4core3fmt9Formatter12debug_struct17hec641bbd2175c09aE_015926e8)
              (auStack_28,param_2,&DAT_0033dcfa,0xe);
    if (lVar1 == -0x7ffffffffffffff0) goto LAB_00a11b6b;
    ppuVar2 = &
              PTR__ZN4core3ptr104drop_in_place_LT_core__option__Option_LT_linera_rpc__grpc__conversions__GrpcProtoConversionError_GT__GT_17hda49f12222efcf67E_014f22f8
    ;
  }
  (*(code *)PTR__ZN4core3fmt8builders11DebugStruct5field17h978a59871c0c5644E_015926f0)
            (auStack_28,"inner",5,param_1,ppuVar2);
LAB_00a11b6b:
  (*(code *)PTR__ZN4core3fmt8builders11DebugStruct6finish17h024c1ece921bca67E_015926f8)(auStack_28);
  return;
}