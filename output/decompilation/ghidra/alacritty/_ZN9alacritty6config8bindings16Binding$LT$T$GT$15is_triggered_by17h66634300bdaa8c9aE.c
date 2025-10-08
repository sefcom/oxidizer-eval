bool _ZN9alacritty6config8bindings16Binding_LT_T_GT_15is_triggered_by17h66634300bdaa8c9aE
               (long param_1,byte param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = _ZN66__LT_winit__event__MouseButton_u20_as_u20_core__cmp__PartialEq_GT_2eq17h519e731f333c5074E
                    (*(undefined4 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x32),param_4,param_5
                    );
  bVar2 = false;
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x34) == param_3)) {
    if ((*(byte *)(param_1 + 0x38) & ~param_2) != 0) {
      return false;
    }
    bVar2 = (*(byte *)(param_1 + 0x39) & param_2) == 0;
  }
  return bVar2;
}