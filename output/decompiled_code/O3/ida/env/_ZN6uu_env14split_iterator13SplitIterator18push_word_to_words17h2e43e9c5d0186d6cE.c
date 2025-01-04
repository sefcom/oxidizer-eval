__int64 __fastcall uu_env::split_iterator::SplitIterator::push_word_to_words(__int128 *a1)
{
  __int128 v2; // [rsp+0h] [rbp-18h] BYREF
  __int64 v3; // [rsp+10h] [rbp-8h]

  v3 = *((_QWORD *)a1 + 2);
  v2 = *a1;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 1LL;
  *((_QWORD *)a1 + 2) = 0LL;
  return ((__int64 (__fastcall *)(__int128 *, __int128 *))alloc::vec::Vec<T,A>::push)(a1 + 4, &v2);
}
