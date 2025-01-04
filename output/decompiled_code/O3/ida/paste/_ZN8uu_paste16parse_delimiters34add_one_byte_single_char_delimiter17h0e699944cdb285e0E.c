__int64 __fastcall uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = alloc::boxed::Box<T>::new(a2);
  return alloc::vec::Vec<T,A>::push(a1, v2, 1LL);
}
