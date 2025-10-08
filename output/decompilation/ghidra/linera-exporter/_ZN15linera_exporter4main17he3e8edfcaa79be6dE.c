undefined8 _ZN15linera_exporter4main17he3e8edfcaa79be6dE(void)

{
  undefined8 uVar1;
  undefined local_d0 [200];
  
  (*(code *)PTR__ZN11linera_base7tracing4init17h2bf0ee6ff75d7e39E_01594870)(&DAT_0033da4e,0xf);
  _ZN12clap_builder6derive6Parser5parse17h10850cfa9f347d9cE(local_d0);
                    /* try { // try from 00a10d87 to 00a10d8e has its CatchHandler @ 00a10da8 */
  uVar1 = _ZN15linera_exporter15ExporterOptions3run17h2bcb1a550b6ec7d8E(local_d0);
  _ZN4core3ptr53drop_in_place_LT_linera_exporter__ExporterOptions_GT_17hf4e1289e7652b143E(local_d0);
  return uVar1;
}