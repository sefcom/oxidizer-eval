__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v8[24]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+28h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) + 56LL * *(_QWORD *)(a1 + 16);
  v7[0] = *(_QWORD *)(a1 + 8);
  v7[1] = v2;
  v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::rposition(v7);
  v5 = core::option::Option<T>::map_or(v3, v4);
  alloc::vec::Vec<T,A>::split_off(v8, a1, v5);
  alloc::collections::vec_deque::VecDeque<T,A>::push_back(a2, a1, &off_57F408);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v9, v8);
  return <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<T,I>>::spec_extend(
           a2,
           v9);
}