undefined8
_ZN3bat6assets14lazy_theme_set12LazyThemeSet3get17heee0fccd6e54090aE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char local_58 [8];
  undefined8 local_50;
  
  lVar1 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h965df95f7bfff64fE
                    (*param_1,param_1[1],param_2,param_3);
  if (lVar1 == 0) {
    return 0;
  }
  _ZN9once_cell6unsync17OnceCell_LT_T_GT_15get_or_try_init17h9b9b77d18dc30d25E
            (local_58,lVar1 + 0x18,lVar1);
  if (local_58[0] != '\r') {
    _ZN4core3ptr108drop_in_place_LT_core__result__Result_LT__RF_syntect__highlighting__theme__Theme_C_bat__error__Error_GT__GT_17hed978b6c13649a06E
              (local_58);
    return 0;
  }
  return local_50;
}