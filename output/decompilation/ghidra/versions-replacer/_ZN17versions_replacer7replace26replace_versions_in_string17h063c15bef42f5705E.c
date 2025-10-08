long _ZN17versions_replacer7replace26replace_versions_in_string17h063c15bef42f5705E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = _ZN9once_cell4sync17OnceCell_LT_T_GT_15get_or_try_init17h080610189289e47aE();
  _ZN5regex5regex6string5Regex8replacen17hc4c3a388728a78fbE
            (param_1,uVar1,param_2,param_3,param_4,&local_28);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  return param_1;
}