__int64 __fastcall bat::assets::build_assets::acknowledgements::license_contains_marker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[48]; // [rsp+18h] [rbp-30h] BYREF

  bat::assets::build_assets::acknowledgements::normalize_license_text(v8, a1, a2);
  v7[0] = a3;
  v7[1] = a3 + 16 * a4;
  LODWORD(a4) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v7, v8);
  core::ptr::drop_in_place<alloc::string::String>(v8);
  return (unsigned int)a4;
}