object Elaborate extends App {
  val firtoolOptions = Array(
    "--lowering-options=" + List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)
  )
  // circt.stage.ChiselStage.emitSystemVerilogFile(new ButtonController, args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new top, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new SimpleDecoder, args, firtoolOptions)

  
  // circt.stage.ChiselStage.emitSystemVerilogFile(new PS2KeyBoard, args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new ScanCodeToAscii, args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new Hex2SegArea, args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new ValFSM, args, firtoolOptions)
  // circt.stage.ChiselStage.emitSystemVerilogFile(new DefFSM, args, firtoolOptions)
}
