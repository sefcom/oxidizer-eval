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
  clap_builder::builder::command::Command::version(local_888,local_5c0,&DAT_0011cdf7,6);
  clap_builder::builder::command::Command::about(local_5c0,local_888,&DAT_0011cdfd,0x19);
  clap_builder::builder::command::Command::after_help(local_888,local_5c0,&DAT_0011ce16,0x22e);
                    /* try { // try from 001f3d92 to 001f3da6 has its CatchHandler @ 001f51a1 */
  uucore::format_usage(&local_ae8,&DAT_0011d044,0x37);
  clap_builder::builder::command::Command::override_usage(local_5c0,local_888,&local_ae8);
  (*(code *)PTR_memcpy_00289ca0)(local_888,local_5c0,700);
  local_5cc = local_304 | 0x4008000040080;
  local_5c4 = local_2fc;
                    /* try { // try from 001f3e00 to 001f3e50 has its CatchHandler @ 001f5330 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0010f4d8,4);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0010f4d8,4);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d07b,0x17);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,5);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f3e81 to 001f3ee9 has its CatchHandler @ 001f531b */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d092,3);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x61);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d092,3);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d095,0x30);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f3f1a to 001f3f6a has its CatchHandler @ 001f5306 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d0c5,0xd);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d0c5,0xd);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d0d2,0xc4);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f3f9b to 001f401f has its CatchHandler @ 001f53a5 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011cbd4,10);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x42);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011cbd4,10);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_888,"SIZE",4);
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d196,0x76);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f403d to 001f40a5 has its CatchHandler @ 001f52f1 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d20c,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x62);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d20d,5);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d212,0x2e);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f40d6 to 001f4139 has its CatchHandler @ 001f52dc */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d240,1);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0011d241,5);
  clap_builder::builder::arg::Arg::short(local_888,&local_ae8,99);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d246,0x15);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f416a to 001f41ee has its CatchHandler @ 001f5393 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d25b,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,100);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d25c,9);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_5c0,&DAT_0011d265,1);
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d266,0xa0);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f420c to 001f426f has its CatchHandler @ 001f52c7 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d306,1);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0011d307,0xe);
  clap_builder::builder::arg::Arg::short(local_888,&local_ae8,0x68);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d315,0x37);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f42a0 to 001f42f0 has its CatchHandler @ 001f52b2 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d34c,6);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d34c,6);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d352,0x48);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4321 to 001f436d has its CatchHandler @ 001f51e0 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d39a,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x6b);
  clap_builder::builder::arg::Arg::help(local_888,&local_ae8,&DAT_0011d39b,0x14);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f439e to 001f4406 has its CatchHandler @ 001f529d */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d3af,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x6c);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d3b0,0xb);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d3bb,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4437 to 001f449f has its CatchHandler @ 001f5288 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d3e0,0xb);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x4c);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d3e0,0xb);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d3eb,0x19);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f44d0 to 001f454d has its CatchHandler @ 001f5381 */
  clap_builder::builder::arg::Arg::new(local_5c0,"dereference-args",0x10);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x44);
  clap_builder::builder::arg::Arg::visible_short_alias(local_5c0,&local_ae8,0x48);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,"dereference-args",0x10);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d404,0x38);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f457e to 001f4602 has its CatchHandler @ 001f536f */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d43c,0xe);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x50);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d43c,0xe);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d44a,0x35);
  clap_builder::builder::arg::Arg::overrides_with(local_888,&local_ae8,&DAT_0011d3e0,0xb);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f4633 to 001f467f has its CatchHandler @ 001f51cb */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d47f,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x6d);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d480,0x14);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f46b0 to 001f4718 has its CatchHandler @ 001f5273 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d494,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x30);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0010f480,4);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d495,0x34);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4749 to 001f47b1 has its CatchHandler @ 001f525e */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d4c9,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x53);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d4ca,0xd);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d4d7,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f47e2 to 001f484a has its CatchHandler @ 001f5249 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d4fc,1);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x73);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d4fd,9);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d506,0x26);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f487b to 001f48cb has its CatchHandler @ 001f5234 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d52c,2);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d52c,2);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d52e,0x28);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,2);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f48fc to 001f4964 has its CatchHandler @ 001f521f */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011d556,0xf);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x78);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011d556,0xf);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d565,0x2a);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4995 to 001f4a0d has its CatchHandler @ 001f53ed */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d58f,9);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_5c0,0x74);
  clap_builder::builder::arg::Arg::long(local_5c0,&local_ae8,&DAT_0011d58f,9);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_5c0,"SIZE",4);
  clap_builder::builder::arg::Arg::num_args(local_5c0,&local_ae8);
  (*(code *)PTR_memcpy_00289ca0)(&local_ae8,local_5c0,0x248);
  local_8a0 = local_378 | 0x20;
  local_89c = local_374;
                    /* try { // try from 001f4a46 to 001f4a61 has its CatchHandler @ 001f53ed */
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d598,0x57);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4a7f to 001f4ae7 has its CatchHandler @ 001f520a */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011cd4e,7);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x76);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011cd4e,7);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d5ef,0x32);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,2);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4b18 to 001f4b84 has its CatchHandler @ 001f535a */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011cd47,7);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011cd47,7);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0011d621,7);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_00112b20,0x20);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,1);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4bb5 to 001f4c4e has its CatchHandler @ 001f53db */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0011cd3b,0xc);
  clap_builder::builder::arg::Arg::short(&local_ae8,local_888,0x58);
  clap_builder::builder::arg::Arg::long(local_888,&local_ae8,&DAT_0011cd3b,0xc);
  clap_builder::builder::arg::Arg::value_name(&local_ae8,local_888,&DAT_0010f4b0,4);
  clap_builder::builder::arg::Arg::value_hint(local_888,&local_ae8,3);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_888,&DAT_0011d628,0x2c);
  clap_builder::builder::arg::Arg::action(&local_268,&local_ae8,1);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4c7f to 001f4d00 has its CatchHandler @ 001f53c9 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d654,0xb);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d654,0xb);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0010f4b0,4);
  clap_builder::builder::arg::Arg::value_hint(&local_ae8,local_5c0,3);
  clap_builder::builder::arg::Arg::help(local_5c0,&local_ae8,&DAT_0011d65f,0x7b);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_5c0,1);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4d31 to 001f4d81 has its CatchHandler @ 001f53b7 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0010f444,4);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_888,&DAT_0010f444,4);
  clap_builder::builder::arg::Arg::value_name(local_888,&local_ae8,&DAT_0010f4b8,4);
  (*(code *)PTR_memcpy_00289ca0)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 0x80;
  local_89c = local_63c;
                    /* try { // try from 001f4dbc to 001f4dcb has its CatchHandler @ 001f53b7 */
  clap_builder::builder::arg::Arg::num_args(local_888,&local_ae8);
  local_ab8 = &DAT_0011d6da;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f4e1c to 001f4e58 has its CatchHandler @ 001f51f5 */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_268,&local_ae8,&DAT_0011d6df,6)
  ;
  clap_builder::builder::possible_value::PossibleValue::alias(&local_2f8,&local_268,&DAT_0011d6e5,3)
  ;
  local_ab8 = &DAT_0011d6e8;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f4e9f to 001f4eba has its CatchHandler @ 001f518f */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_2b0,&local_ae8,&DAT_0011d6ed,6)
  ;
  local_ab8 = "creation";
  uStack_ab0 = 8;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f4f01 to 001f4f1c has its CatchHandler @ 001f517d */
  clap_builder::builder::possible_value::PossibleValue::alias(&local_268,&local_ae8,&DAT_0011d6f3,5)
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
                    /* try { // try from 001f4ff1 to 001f5000 has its CatchHandler @ 001f51f5 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_ae8);
                    /* try { // try from 001f5001 to 001f5018 has its CatchHandler @ 001f5178 */
  clap_builder::builder::arg::Arg::value_parser(&local_ae8,local_888,&local_268);
                    /* try { // try from 001f5019 to 001f5034 has its CatchHandler @ 001f53b7 */
  clap_builder::builder::arg::Arg::help(&local_268,&local_ae8,&DAT_0011d6f8,0xd5);
  clap_builder::builder::command::Command::arg(local_888,local_5c0,&local_268);
                    /* try { // try from 001f5052 to 001f50be has its CatchHandler @ 001f5345 */
  clap_builder::builder::arg::Arg::new(local_5c0,&DAT_0011d7cd,10);
  clap_builder::builder::arg::Arg::long(&local_ae8,local_5c0,&DAT_0011d7cd,10);
  clap_builder::builder::arg::Arg::value_name(local_5c0,&local_ae8,&DAT_0011d7d7,5);
  clap_builder::builder::arg::Arg::help(&local_ae8,local_5c0,&DAT_0011d7dc,0x60);
  clap_builder::builder::command::Command::arg(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f50d7 to 001f50ef has its CatchHandler @ 001f51b6 */
  clap_builder::builder::arg::Arg::new(local_888,&DAT_0010f4b0,4);
  (*(code *)PTR_memcpy_00289ca0)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 4;
  local_89c = local_63c;
                    /* try { // try from 001f5128 to 001f513c has its CatchHandler @ 001f51b6 */
  clap_builder::builder::arg::Arg::value_hint(local_888,&local_ae8,2);
  clap_builder::builder::arg::Arg::action(&local_ae8,local_888,1);
  clap_builder::builder::command::Command::arg(param_1,local_5c0,&local_ae8);
  return param_1;
}