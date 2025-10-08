undefined8
_ZN9alacritty3ipc19send_reply_fallible17h775e89a0afb08361E(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* try { // try from 0055c505 to 0055c53a has its CatchHandler @ 0055c594 */
  _ZN10serde_json3ser6to_vec17ha6c4e490e6469418E
            (&local_28,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 0055c553 to 0055c55a has its CatchHandler @ 0055c579 */
  uVar1 = _ZN3std2io5Write9write_all17h7d16bb30299e266cE(param_1,local_20,local_18,-local_28);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_28);
  _ZN4core3ptr178drop_in_place_LT__LT_toml__value__MapDeserializer_u20_as_u20_serde__de__MapAccess_GT___next_value_seed_LT_core__marker__PhantomData_LT_u8_GT__GT____u7b__u7b_closure_u7d__u7d__GT_17h16862b29d1d1c4a4E
            (param_2);
  return uVar1;
}