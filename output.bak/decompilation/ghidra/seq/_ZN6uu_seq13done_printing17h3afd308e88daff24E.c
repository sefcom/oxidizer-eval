void __rustcall uu_seq::done_printing(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined local_50 [40];
  
  _<uu_seq::extendedbigdecimal::ExtendedBigDecimal_as_num_traits::identities::Zero>::zero(local_50);
                    /* try { // try from 001c7942 to 001c794c has its CatchHandler @ 001c797d */
  cVar1 = core::cmp::PartialOrd::ge(param_2,local_50);
  core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(local_50);
  if (cVar1 == '\0') {
    core::cmp::PartialOrd::lt(param_1,param_3);
  }
  else {
    core::cmp::PartialOrd::gt();
  }
  return;
}