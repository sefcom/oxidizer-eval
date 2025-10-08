__int64 __fastcall bat::vscreen::Attributes::to_reset_sequence(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]

  v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(17LL, 1LL, 1LL, &off_6CD180);
  v5 = v2;
  v6 = 0LL;
  if ( a2 )
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v4,
      &unk_1A2FEB,
      &unk_1A2FF2);
  a1[2] = v6;
  *a1 = v4;
  result = v5;
  a1[1] = v5;
  return result;
}