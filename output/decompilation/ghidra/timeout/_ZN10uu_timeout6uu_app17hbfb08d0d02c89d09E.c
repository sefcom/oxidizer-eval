long _ZN10uu_timeout6uu_app17hbfb08d0d02c89d09E(long param_1)

{
  undefined *puVar1;
  undefined auStack_ab8 [632];
  uint local_840;
  undefined4 local_83c;
  undefined local_838 [632];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_57c;
  undefined4 local_574;
  undefined local_570 [632];
  uint local_2f8;
  undefined4 local_2f4;
  undefined local_2a8 [640];
  
  _ZN12clap_builder7builder7command7Command3new17hb7b9e1dab7a395deE(local_838);
  _ZN12clap_builder7builder7command7Command7version17h46a466e77cb5da5dE(local_570,local_838);
  _ZN12clap_builder7builder7command7Command5about17h57e5ab36e61a23e6E(local_838,local_570);
                    /* try { // try from 0016d346 to 0016d35a has its CatchHandler @ 0016d7d4 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0021ac68)
            (auStack_ab8,"{} [OPTION] DURATION COMMAND...",0x1f);
  _ZN12clap_builder7builder7command7Command14override_usage17hfb49b5994d20e4b7E
            (local_570,local_838,auStack_ab8);
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_838,"foreground",10);
  _ZN12clap_builder7builder3arg3Arg4long17h514f3620c7469438E(auStack_ab8,local_838,"foreground",10);
  _ZN12clap_builder7builder3arg3Arg5short17h630ebfc314b5bdbfE(local_838,auStack_ab8,0x66);
                    /* try { // try from 0016d3c0 to 0016d3d6 has its CatchHandler @ 0016d7c2 */
  _ZN12clap_builder7builder3arg3Arg4help17h46362353e6c13036E
            (auStack_ab8,local_838,
             "when not running timeout directly from a shell prompt, allow COMMAND to read from the TTY and get TTY signals; in this mode, children of COMMAND will not be timed out"
             ,0xa6);
  _ZN12clap_builder7builder3arg3Arg6action17hc9674d23fb38bbb8E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_570,"kill-after",10);
  _ZN12clap_builder7builder3arg3Arg4long17h514f3620c7469438E(auStack_ab8,local_570,"kill-after",10);
  _ZN12clap_builder7builder3arg3Arg5short17h630ebfc314b5bdbfE(local_570,auStack_ab8,0x6b);
                    /* try { // try from 0016d454 to 0016d46a has its CatchHandler @ 0016d7b0 */
  _ZN12clap_builder7builder3arg3Arg4help17h46362353e6c13036E
            (auStack_ab8,local_570,
             "also send a KILL signal if COMMAND is still running this long after the initial signal was sent"
             ,0x5f);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_838,"preserve-status",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h514f3620c7469438E
            (auStack_ab8,local_838,"preserve-status",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h630ebfc314b5bdbfE(local_838,auStack_ab8,0x70);
                    /* try { // try from 0016d4d0 to 0016d4e6 has its CatchHandler @ 0016d79e */
  _ZN12clap_builder7builder3arg3Arg4help17h46362353e6c13036E
            (auStack_ab8,local_838,
             "exit with the same status as COMMAND, even when the command times out",0x45);
  _ZN12clap_builder7builder3arg3Arg6action17hc9674d23fb38bbb8E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_570,"signal",6);
  _ZN12clap_builder7builder3arg3Arg5short17h630ebfc314b5bdbfE(auStack_ab8,local_570,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h514f3620c7469438E(local_570,auStack_ab8,"signal",6);
                    /* try { // try from 0016d564 to 0016d58a has its CatchHandler @ 0016d7e6 */
  _ZN12clap_builder7builder3arg3Arg4help17h46362353e6c13036E
            (auStack_ab8,local_570,
             "specify the signal to be sent on timeout; SIGNAL may be a name like \'HUP\' or a number; see \'kill -l\' for a list of signals"
             ,0x7a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h142a63b678798546E(local_2a8,auStack_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_570,local_838,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_838,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h630ebfc314b5bdbfE(auStack_ab8,local_838,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h514f3620c7469438E(local_838,auStack_ab8,"verbose",7);
                    /* try { // try from 0016d5f5 to 0016d60b has its CatchHandler @ 0016d78c */
  _ZN12clap_builder7builder3arg3Arg4help17h46362353e6c13036E
            (auStack_ab8,local_838,
             "diagnose to stderr any signal sent upon timeout: sending signal  to command \nfailed to execute process: "
             ,0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17hc9674d23fb38bbb8E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_570,"duration",8);
  puVar1 = PTR_memcpy_0021ab18;
  (*(code *)PTR_memcpy_0021ab18)(auStack_ab8,local_570,0x278);
  local_840 = local_2f8 | 1;
  local_83c = local_2f4;
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h83358cd592e20eb1E(local_838,"command",7);
  (*(code *)puVar1)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 | 1;
  local_83c = local_5bc;
  _ZN12clap_builder7builder3arg3Arg6action17hc9674d23fb38bbb8E(local_838,auStack_ab8,1);
                    /* try { // try from 0016d709 to 0016d713 has its CatchHandler @ 0016d77a */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h6d24875c8bbbc6dfE(auStack_ab8,local_838);
  _ZN12clap_builder7builder7command7Command3arg17h02c1e1c0d10541e1E(local_838,local_570,auStack_ab8)
  ;
  (*(code *)PTR_memcpy_0021ab18)(param_1,local_838,700);
  *(ulong *)(param_1 + 700) = local_57c | 0x80000000a0;
  *(undefined4 *)(param_1 + 0x2c4) = local_574;
  return param_1;
}