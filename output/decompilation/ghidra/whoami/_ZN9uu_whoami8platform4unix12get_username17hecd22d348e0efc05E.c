void _ZN9uu_whoami8platform4unix12get_username17hecd22d348e0efc05E(undefined8 *param_1)

{
  __uid_t _Var1;
  undefined local_a8 [24];
  long local_90;
  undefined8 local_88;
  
  _Var1 = _ZN6uucore8features7process7geteuid17hdc9764945a55bce9E();
  _ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h0b6474282aeae5d7E
            (&local_90,_Var1);
  if (local_90 == -0x8000000000000000) {
    param_1[1] = local_88;
    *param_1 = 0x8000000000000000;
  }
  else {
    _ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h39d946a14e614e73E
              (local_a8,&local_90);
    _ZN4core3ops8function6FnOnce9call_once17h3bdbc0715ca1c228E(param_1,local_a8);
  }
  return;
}