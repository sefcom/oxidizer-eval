__int64 __fastcall uu_cat::LineNumber::increment(_QWORD *a1)
{
  __int64 result; // rax

  uucore::features::fast_inc::fast_inc_one(a1, a1 + 5, a1[6]);
  result = core::cmp::Ord::min(a1[4], a1[5]);
  a1[4] = result;
  return result;
}