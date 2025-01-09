undefined8 __rustcall uu_du::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  char *local_ab8;
  undefined8 uStack_ab0;
  ulong local_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined4 local_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 local_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 local_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined8 local_a18;
  uint local_8a0;
  undefined4 local_89c;
  undefined local_888 [584];
  uint local_640;
  undefined4 local_63c;
  ulong local_5cc;
  undefined4 local_5c4;
  undefined local_5c0 [584];
  uint local_378;
  undefined4 local_374;
  ulong local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_5c0,uVar1);
  clap_builder::builder::command::Command::version(local_888,local_5c0,&DAT_0011cf79,6);
  clap_builder::builder::command::Command::about(local_5c0,local_888,&DAT_0011cf7f,0x19);
  clap_builder::builder::command::Command::after_help(local_888,local_5c0,&DAT_0011cf98,0x22e);
                    /* try { // try from 001f4162 to 001f4176 has its CatchHandler @ 001f5571 */
  uucore::format_usage(&local_ae8,&DAT_0011d1c6,0x37);
  clap_builder::builder::command::Command::override_usage(local_5c0,local_888,&local_ae8);
  (*(code *)PTR_memcpy_0028a2d8)(local_888,local_5c0,700);
  local_5cc = local_304 | 0x4008000040080;
  local_5c4 = local_2fc;
                    /* try { // try from 001f41d0 to 001f4220 has its CatchHandler @ 001f5700 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0010f658,4);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0010f658,4);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d1fd,0x17);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,5);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4251 to 001f42b9 has its CatchHandler @ 001f56eb */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d214,3);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x61);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d214,3);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d217,0x30);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f42ea to 001f433a has its CatchHandler @ 001f56d6 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d247,0xd);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d247,0xd);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d254,0xc4);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f436b to 001f43ef has its CatchHandler @ 001f5775 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011cd4c,10);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x42);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011cd4c,10);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_888,"SIZE",4);
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d318,0x76);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f440d to 001f4475 has its CatchHandler @ 001f56c1 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d38e,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x62);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d38f,5);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d394,0x2e);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f44a6 to 001f4509 has its CatchHandler @ 001f56ac */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d3c2,1);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0011d3c3,5);
  clap_builder::builder::arg::Arg::short(local_888,&local_ae8,99);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d3c8,0x15);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f453a to 001f45be has its CatchHandler @ 001f5763 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d3dd,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,100);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d3de,9);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_5c0,&DAT_0011d3e7,1);
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d3e8,0xa0);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f45dc to 001f463f has its CatchHandler @ 001f5697 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d488,1);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0011d489,0xe);
  clap_builder::builder::arg::Arg::short(local_888,&local_ae8,0x68);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d497,0x37);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4670 to 001f46c0 has its CatchHandler @ 001f5682 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d4ce,6);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d4ce,6);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d4d4,0x48);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f46f1 to 001f473d has its CatchHandler @ 001f55b0 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d51c,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x6b);
  clap_builder::builder::arg::Arg::help(local_888,&local_ae8,&DAT_0011d51d,0x14);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f476e to 001f47d6 has its CatchHandler @ 001f566d */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d531,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x6c);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d532,0xb);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d53d,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4807 to 001f486f has its CatchHandler @ 001f5658 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d562,0xb);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x4c);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d562,0xb);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d56d,0x19);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f48a0 to 001f491d has its CatchHandler @ 001f5751 */
  clap_builder::builder::arg::Arg::new(local_5c0,"dereference-args",0x10);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x44);
  clap_builder::builder::arg::Arg::visible_short_alias(local_5c0,&local_ae8,0x48);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,"dereference-args",0x10);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d586,0x38);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f494e to 001f49d2 has its CatchHandler @ 001f573f */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d5be,0xe);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x50);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d5be,0xe);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d5cc,0x35);
  clap_builder::builder::arg::Arg::overrides_with(local_888,&local_ae8,&DAT_0011d562,0xb);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f4a03 to 001f4a4f has its CatchHandler @ 001f559b */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d601,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x6d);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d602,0x14);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4a80 to 001f4ae8 has its CatchHandler @ 001f5643 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d616,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x30);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0010f600,4);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d617,0x34);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4b19 to 001f4b81 has its CatchHandler @ 001f562e */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d64b,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x53);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d64c,0xd);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d659,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4bb2 to 001f4c1a has its CatchHandler @ 001f5619 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d67e,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x73);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d67f,9);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d688,0x26);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4c4b to 001f4c9b has its CatchHandler @ 001f5604 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d6ae,2);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d6ae,2);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d6b0,0x28);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4ccc to 001f4d34 has its CatchHandler @ 001f55ef */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d6d8,0xf);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x78);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d6d8,0xf);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d6e7,0x2a);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4d65 to 001f4ddd has its CatchHandler @ 001f57bd */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d711,9);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x74);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d711,9);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_5c0,"SIZE",4);
  clap_builder::builder::arg::Arg::num_args(local_5c0,&local_ae8);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_5c0,0x248);
  local_8a0 = local_378 | 0x20;
  local_89c = local_374;
                    /* try { // try from 001f4e16 to 001f4e31 has its CatchHandler @ 001f57bd */
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d71a,0x57);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4e4f to 001f4eb7 has its CatchHandler @ 001f55da */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011cee3,7);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x76);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011cee3,7);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d771,0x32);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4ee8 to 001f4f54 has its CatchHandler @ 001f572a */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011cebf,7);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011cebf,7);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0011d7a3,7);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_00112c98,0x20);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,1);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4f85 to 001f501e has its CatchHandler @ 001f57ab */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011ceb3,0xc);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x58);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011ceb3,0xc);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_888,&DAT_0010f630,4);
  clap_builder::builder::arg::Arg::value_hint(local_888,&local_ae8,3);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d7aa,0x2c);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,1);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f504f to 001f50d0 has its CatchHandler @ 001f5799 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d7d6,0xb);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d7d6,0xb);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0010f630,4);
  clap_builder::builder::arg::Arg::value_hint(&local_ae8,local_5c0,3);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d7e1,0x7b);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,1);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f5101 to 001f5151 has its CatchHandler @ 001f5787 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0010f5c4,4);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0010f5c4,4);
  clap_builder::builder::arg::Arg::value_name(local_888,&local_ae8,&DAT_0010f638,4);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 0x80;
  local_89c = local_63c;
                    /* try { // try from 001f518c to 001f519b has its CatchHandler @ 001f5787 */
  clap_builder::builder::arg::Arg::num_args(local_888,&local_ae8);
  local_ab8 = &DAT_0011cf6f;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f51ec to 001f5228 has its CatchHandler @ 001f55c5 */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_268,&local_ae8,&DAT_0011d85c,6)
  ;
  clap_builder::builder::possible_value::PossibleValue::alias(&local_2f8,&local_268,&DAT_0011d862,3)
  ;
  local_ab8 = &DAT_0011cf74;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f526f to 001f528a has its CatchHandler @ 001f555f */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_2b0,&local_ae8,&DAT_0011d865,6)
  ;
  local_ab8 = "creation";
  uStack_ab0 = 8;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f52d1 to 001f52ec has its CatchHandler @ 001f554d */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_268,&local_ae8,&DAT_0011d86b,5)
  ;
  local_ae8 = local_2f8;
  uStack_ae0 = uStack_2f0;
  local_ad8 = local_2e8;
  uStack_ad0 = uStack_2e0;
  local_ac8 = local_2d8;
  uStack_ac0 = uStack_2d0;
  local_ab8 = (char *)local_2c8;
  uStack_ab0 = uStack_2c0;
  local_aa8 = local_2b8;
  local_aa0 = local_2b0;
  uStack_a98 = uStack_2a8;
  local_a90 = local_2a0;
  uStack_a88 = uStack_298;
  local_a80 = local_290;
  uStack_a78 = uStack_288;
  local_a70 = local_280;
  uStack_a68 = uStack_278;
  local_a60 = local_270;
  local_a18 = local_228;
  local_a28 = local_238;
  uStack_a24 = uStack_234;
  uStack_a20 = uStack_230;
  uStack_a1c = uStack_22c;
  local_a38 = local_248;
  uStack_a34 = uStack_244;
  uStack_a30 = uStack_240;
  uStack_a2c = uStack_23c;
  local_a48 = local_258;
  uStack_a44 = uStack_254;
  uStack_a40 = uStack_250;
  uStack_a3c = uStack_24c;
  local_a58 = local_268;
  uStack_a54 = uStack_264;
  uStack_a50 = uStack_260;
  uStack_a4c = uStack_25c;
                    /* try { // try from 001f53c1 to 001f53d0 has its CatchHandler @ 001f55c5 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_ae8);
                    /* try { // try from 001f53d1 to 001f53e8 has its CatchHandler @ 001f5548 */
  clap_builder::builder::arg::Arg::value_parser(&local_ae8,local_888,&local_268);
                    /* try { // try from 001f53e9 to 001f5404 has its CatchHandler @ 001f5787 */
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d870,0xd5);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f5422 to 001f548e has its CatchHandler @ 001f5715 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d945,10);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d945,10);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0011d94f,5);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d954,0x60);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f54a7 to 001f54bf has its CatchHandler @ 001f5586 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0010f630,4);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 4;
  local_89c = local_63c;
                    /* try { // try from 001f54f8 to 001f550c has its CatchHandler @ 001f5586 */
  clap_builder::builder::arg::Arg::value_hint(local_888,&local_ae8,2);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,1);
  clap_builder::builder::command::Command::arg(param_1,local_5c0,&local_ae8);
  return param_1;
}