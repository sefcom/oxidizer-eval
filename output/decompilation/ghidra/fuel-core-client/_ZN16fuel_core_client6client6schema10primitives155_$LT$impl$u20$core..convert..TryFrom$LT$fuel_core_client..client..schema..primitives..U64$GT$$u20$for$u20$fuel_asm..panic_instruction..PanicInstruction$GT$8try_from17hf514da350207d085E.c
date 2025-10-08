undefined8 *
_ZN16fuel_core_client6client6schema10primitives155__LT_impl_u20_core__convert__TryFrom_LT_fuel_core_client__client__schema__primitives__U64_GT__u20_for_u20_fuel_asm__panic_instruction__PanicInstruction_GT_8try_from17hf514da350207d085E
          (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined extraout_DL;
  
  uVar1 = (*(code *)
            PTR__ZN96__LT_fuel_asm__panic_instruction__PanicInstruction_u20_as_u20_core__convert__From_LT_u64_GT__GT_4from17h90bb7efc5033f10dE_00720be0
          )(param_2);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined *)((long)param_1 + 0xc) = extraout_DL;
  *param_1 = 10;
  return param_1;
}