void _ZN9alacritty14window_context13WindowContext17add_window_config17h65a7576981f33ffbE
               (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
                    /* try { // try from 0056fe4f to 0056fe7c has its CatchHandler @ 0056fe93 */
  _ZN9alacritty11message_bar13MessageBuffer13remove_target17haff6ad13a53c4ac5E
            (param_1 + 0x1cd0,"alacritty_log_window_config",0x1b);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_14extend_trusted17h5c4c742c6e08d753E
            (param_1 + 0x1df8,param_3,param_4 * 0x38 + param_3,
             &PTR_s_alacritty_src_window_context_rs_00984398,param_5,param_6,uVar1);
  _ZN9alacritty14window_context13WindowContext13update_config17h98162595dbe55738E(param_1,param_2);
  return;
}