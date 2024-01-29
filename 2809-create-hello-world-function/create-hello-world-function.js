/**
 * @return {Function}
 */
var createHelloWorld = function() {

    return(...args)=>"Hello World";
    return function(...args) {
        
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */