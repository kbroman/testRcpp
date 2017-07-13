#' add one to each element of a vector
#'
#' add one to each element of a vector
#'
#' @param x A numeric vector
#'
#' @return The input numeric vector, with 1 added to each element.
#'
#' @examples
#' add_one(1:10)
#'
#' @export
add_one <-
    function(x)
{
    # call the C++ function
    addone(x)
}
