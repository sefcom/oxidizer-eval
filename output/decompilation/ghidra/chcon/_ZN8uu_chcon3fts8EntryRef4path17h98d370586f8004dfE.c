undefined8 _ZN8uu_chcon3fts8EntryRef4path17h98d370586f8004dfE(long param_1)

{
  int local_18 [2];
  undefined8 local_10;
  
  if (((ulong)*(ushort *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR__ZN4core3ffi5c_str4CStr19from_bytes_with_nul17ha2d537a2ffe4f9f2E_001f7088)
              (local_18,*(long *)(param_1 + 0x30),(ulong)*(ushort *)(param_1 + 0x40) + 1);
    if (local_18[0] == 1) {
      return 0;
    }
    return local_10;
  }
  return 0;
}