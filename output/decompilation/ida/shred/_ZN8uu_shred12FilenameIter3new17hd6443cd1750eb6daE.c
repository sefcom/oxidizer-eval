__int64 __fastcall uu_shred::FilenameIter::new(__int64 a1)
{
  __int64 result; // rax

  result = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem();
  *(_BYTE *)(a1 + 24) = 0;
  return result;
}