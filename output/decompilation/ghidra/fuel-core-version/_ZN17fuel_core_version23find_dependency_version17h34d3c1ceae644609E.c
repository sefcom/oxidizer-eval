void _ZN17fuel_core_version23find_dependency_version17h34d3c1ceae644609E
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = _ZN4toml5value5Value3get17hd18e411ca8cd7591E(param_2,"workspace",9);
  if (lVar1 != 0) {
    lVar1 = _ZN4toml5value5Value3get17hd18e411ca8cd7591E(lVar1,"dependencies",0xc);
    if (lVar1 != 0) {
      pcVar2 = (char *)_ZN4toml5value5Value3get17hd18e411ca8cd7591E(lVar1,"fuel-core",9);
      if (pcVar2 != (char *)0x0) {
        if (*pcVar2 == '\0') {
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002375b0
          )(param_1,pcVar2 + 8);
          return;
        }
        if (*pcVar2 == '\x06') {
          pcVar2 = (char *)_ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h8d563fb2184b048dE
                                     (*(undefined8 *)(pcVar2 + 8),*(undefined8 *)(pcVar2 + 0x10));
          if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he0e13f7bf8301396E
                      (param_1,*(undefined8 *)(pcVar2 + 0x10),*(undefined8 *)(pcVar2 + 0x18));
            return;
          }
        }
      }
    }
  }
  *param_1 = 0x8000000000000000;
  return;
}