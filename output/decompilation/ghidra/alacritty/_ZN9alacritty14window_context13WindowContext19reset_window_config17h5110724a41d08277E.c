void _ZN9alacritty14window_context13WindowContext19reset_window_config17h5110724a41d08277E
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0056fdd5 to 0056fe03 has its CatchHandler @ 0056fe16 */
  _ZN9alacritty11message_bar13MessageBuffer13remove_target17haff6ad13a53c4ac5E
            (param_1 + 0x1cd0,"alacritty_log_window_config",0x1b);
  uVar1 = *(undefined8 *)(param_1 + 0x1e08);
  *(undefined8 *)(param_1 + 0x1e08) = 0;
  _ZN4core3ptr81drop_in_place_LT__u5b__LP_alloc__string__String_C_toml__value__Value_RP__u5d__GT_17h735d7c89b93c812cE
            (*(undefined8 *)(param_1 + 0x1e00),uVar1);
  _ZN9alacritty14window_context13WindowContext13update_config17h98162595dbe55738E(param_1,param_2);
  return;
}