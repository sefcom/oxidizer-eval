long _ZN9alacritty3cli13ParsedOptions18override_config_rc17h35ab90cde0bbb7d9E
               (long param_1,long param_2)

{
  long local_868;
  undefined local_860 [1056];
  undefined8 local_440;
  undefined8 local_438;
  undefined local_430 [1056];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0053467f to 0053468b has its CatchHandler @ 00534700 */
    local_868 = param_2;
    _ZN77__LT_alacritty__config__ui_config__UiConfig_u20_as_u20_core__clone__Clone_GT_5clone17he1d2f8f7f6ea9593E
              (local_860,param_2 + 0x10);
                    /* try { // try from 0053468c to 00534698 has its CatchHandler @ 005346f1 */
    _ZN9alacritty3cli13ParsedOptions15override_config17hf97b5b294eb97d07E(param_1,local_860);
    (*(code *)PTR_memcpy_009de0b0)(local_430,local_860,0x420);
    local_440 = 1;
    local_438 = 1;
                    /* try { // try from 005346c9 to 005346d5 has its CatchHandler @ 005346ef */
    param_2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4b5907c012952b91E(&local_440);
    _ZN4core3ptr80drop_in_place_LT_alloc__rc__Rc_LT_alacritty__config__ui_config__UiConfig_GT__GT_17h077aa8980e2272c3E
              (&local_868);
  }
  return param_2;
}