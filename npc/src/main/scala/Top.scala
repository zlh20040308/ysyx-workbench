import chisel3._
import chisel3.util._

class TopIO extends Bundle {

}
trait Top extends Module {
  val io: TopIO
}

class top extends Top {
  val io = IO(new TopIO)

}
