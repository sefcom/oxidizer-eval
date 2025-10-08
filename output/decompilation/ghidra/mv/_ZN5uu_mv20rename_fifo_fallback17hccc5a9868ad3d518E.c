long _ZN5uu_mv20rename_fifo_fallback17hccc5a9868ad3d518E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char local_30;
  char local_2f;
  long local_28;
  
  _ZN3std2fs6exists17h687a541e0d003889E(&local_30,param_3,param_4);
  if ((local_30 != '\x01') &&
     (((local_2f != '\x01' ||
       (local_28 = _ZN3std2fs11remove_file17hcda18fb70e9be9e2E(param_3,param_4), local_28 == 0)) &&
      (local_28 = (*(code *)PTR__ZN6uucore8features2fs9make_fifo17hb14eabe17aca9891E_0024abb0)
                            (param_3,param_4), local_28 == 0)))) {
    lVar1 = _ZN3std2fs11remove_file17hcda18fb70e9be9e2E(param_1,param_2);
    return lVar1;
  }
  return local_28;
}