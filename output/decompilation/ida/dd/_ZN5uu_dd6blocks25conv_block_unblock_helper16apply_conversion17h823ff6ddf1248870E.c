__int64 __fastcall uu_dd::blocks::conv_block_unblock_helper::apply_conversion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
  *(_QWORD *)(a1 + 32) = a3;
  return result;
}