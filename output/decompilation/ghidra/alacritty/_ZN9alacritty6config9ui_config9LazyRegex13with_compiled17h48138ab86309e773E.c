void _ZN9alacritty6config9ui_config9LazyRegex13with_compiled17h48138ab86309e773E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 0053809e to 005380b2 has its CatchHandler @ 005380cf */
    lVar1 = _ZN9alacritty6config9ui_config16LazyRegexVariant8compiled17h75ac352b676053e5E
                      (param_1 + 0x18);
    if (lVar1 != 0) {
      _ZN4core3ops8function6FnOnce9call_once17h85ea745008baa361E(param_2,lVar1);
    }
    _ZN4core3ptr127drop_in_place_LT_core__cell__RefMut_LT_std__collections__hash__map__HashMap_LT_usize_C__LP_i32_C_polling__Event_RP__GT__GT__GT_17h16540aa4a9ff850fE
              (param_1 + 0x10);
    return;
  }
  uVar2 = (*(code *)PTR__ZN4core4cell22panic_already_borrowed17h29b197167d5655f2E_009de3a8)
                    (&PTR_s_alacritty_src_config_ui_config_r_00981b10);
                    /* catch() { ... } // from try @ 0053809e with catch @ 005380cf */
  _ZN4core3ptr127drop_in_place_LT_core__cell__RefMut_LT_std__collections__hash__map__HashMap_LT_usize_C__LP_i32_C_polling__Event_RP__GT__GT__GT_17h16540aa4a9ff850fE
            ();
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar2);
}